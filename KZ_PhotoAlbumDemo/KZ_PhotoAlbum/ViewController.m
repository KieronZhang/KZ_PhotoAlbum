//
//  ViewController.m
//  KZ_PhotoAlbum
//
//  Created by Kieron Zhang on 2016/12/24.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import "ViewController.h"
#import "CollectionViewCell.h"
#import <KZ_PhotoAlbumFramework/KZ_PhotoAlbum.h>

@interface ViewController () <KZ_ImagePickerControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    UICollectionView *imageCollectionView;
    NSMutableArray *imagesArray;
}

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    imagesArray = [[NSMutableArray alloc] initWithCapacity:0];
    
    UIBarButtonItem *leftButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemAdd target:self action:@selector(leftButton)];
    self.navigationItem.leftBarButtonItem = leftButton;
    
    UIBarButtonItem *rightButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemAdd target:self action:@selector(rightTapped)];
    self.navigationItem.rightBarButtonItem = rightButton;
    
    UICollectionViewFlowLayout *flowLayout = [[UICollectionViewFlowLayout alloc] init];
    flowLayout.scrollDirection = UICollectionViewScrollDirectionVertical;
    
    imageCollectionView = [[UICollectionView alloc] initWithFrame:self.view.bounds collectionViewLayout:flowLayout];
    imageCollectionView.delegate = self;
    imageCollectionView.dataSource = self;
    imageCollectionView.backgroundColor = [UIColor whiteColor];
    imageCollectionView.alwaysBounceVertical = YES;
    imageCollectionView.showsHorizontalScrollIndicator = NO;
    imageCollectionView.showsVerticalScrollIndicator = NO;
    [self.view addSubview:imageCollectionView];
    [imageCollectionView registerClass:[CollectionViewCell class] forCellWithReuseIdentifier:@"CollectionViewCell"];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

- (void)leftButton {
    KZ_ImagePickerController *imagePickerViewController = [[KZ_ImagePickerController alloc] initWithType:KZ_ImagePickerType_SmartAlbumUserLibrary];
    imagePickerViewController.imagePickerDelegate = self;
    imagePickerViewController.mediaType = KZ_ImagePickerMediaType_All;
    imagePickerViewController.maxSelectImageCount = 9;
    imagePickerViewController.imageTintColor = [UIColor redColor];
//    imagePickerViewController.directShowLargePhoto = YES;
    imagePickerViewController.maxSelectImageCount = 5;
    imagePickerViewController.noAuthorizationText = @"hello";
    imagePickerViewController.navigationBarStyle = UIBarStyleBlack;
    imagePickerViewController.navigationTintColor = [UIColor whiteColor];
    [self presentViewController:imagePickerViewController animated:YES completion:nil];
}

- (void)rightTapped {
    KZ_ImagePickerController *imagePickerViewController = [[KZ_ImagePickerController alloc] initWithType:KZ_ImagePickerType_SmartAlbumUserLibrary];
    imagePickerViewController.imagePickerDelegate = self;
    imagePickerViewController.mediaType = KZ_ImagePickerMediaType_Video;
    imagePickerViewController.directShowLargePhoto = YES;
    [self presentViewController:imagePickerViewController animated:YES completion:nil];
}

#pragma mark KZ_ImagePickerControllerDelegate
- (void)imagePickerController:(KZ_ImagePickerController *)imagePickerController didSelectImages:(NSArray<KZ_ImagePicker *> *)array {
    [imagePickerController dismissViewControllerAnimated:YES completion:nil];
    for (KZ_ImagePicker *imagePicker in array) {
        if (imagePicker.mediaType == KZ_AssetMediaType_Video) {
            NSLog(@"视频地址 %@", imagePicker.videoFileURL);
            NSLog(@"视频地址 %@", imagePicker.videoFilePath);
        }
        else {
            [imagesArray addObject:imagePicker.thumbnail];
        }
    }
    [imageCollectionView reloadData];
}

- (void)imagePickerControllerDidAlreadyCancel:(KZ_ImagePickerController *)imagePickerController {
    [imagePickerController dismissViewControllerAnimated:YES completion:nil];
}

#pragma mark UICollectionViewDelegate
- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
    return imagesArray.count;
}

- (CGFloat)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section {
    return 0;
}

- (CGFloat)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout*)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section {
    return 0;
}

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath {
    return CGSizeMake(80, 80);
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
    static NSString *CollectionCell = @"CollectionViewCell";
    CollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:CollectionCell forIndexPath:indexPath];
    [cell sizeToFit];
    if (!cell) {
        cell = [[CollectionViewCell alloc] initWithFrame:CGRectMake(0, 0, 80, 80)];
    }
    cell.image = imagesArray[indexPath.item];
    return cell;
}

@end
