//
//  KZ_ImagePickerConst.h
//  KZ_PhotoAlbum
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, KZ_ImagePickerType) {
    KZ_ImagePickerType_None = 0,
    // PHAssetCollectionTypeAlbum regular subtypes
    KZ_ImagePickerType_AlbumRegular = 2,
    KZ_ImagePickerType_AlbumSyncedEvent = 3,
    KZ_ImagePickerType_AlbumSyncedFaces = 4,
    KZ_ImagePickerType_AlbumSyncedAlbum = 5,
    KZ_ImagePickerType_AlbumImported = 6,
    // PHAssetCollectionTypeAlbum shared subtypes
    KZ_ImagePickerType_AlbumMyPhotoStream = 100,
    KZ_ImagePickerType_AlbumCloudShared = 101,
    // PHAssetCollectionTypeSmartAlbum subtypes
    KZ_ImagePickerType_SmartAlbumGeneric = 200,
    KZ_ImagePickerType_SmartAlbumPanoramas  = 201,
    KZ_ImagePickerType_SmartAlbumVideos = 202,
    KZ_ImagePickerType_SmartAlbumFavorites  = 203,
    KZ_ImagePickerType_SmartAlbumTimelapses = 204,
    KZ_ImagePickerType_SmartAlbumAllHidden  = 205,
    KZ_ImagePickerType_SmartAlbumRecentlyAdded = 206,
    KZ_ImagePickerType_SmartAlbumBursts = 207,
    KZ_ImagePickerType_SmartAlbumSlomoVideos = 208,
    KZ_ImagePickerType_SmartAlbumUserLibrary = 209,
    KZ_ImagePickerType_SmartAlbumSelfPortraits = 210,
    KZ_ImagePickerType_SmartAlbumScreenshots = 211,
    KZ_ImagePickerType_Any = NSIntegerMax
};

typedef NS_OPTIONS(NSInteger, KZ_ImagePickerMediaType) {
    KZ_ImagePickerMediaType_Unknown = 1 << 0,
    KZ_ImagePickerMediaType_Image = 1 << 1,
    KZ_ImagePickerMediaType_Video = 1 << 2,
    KZ_ImagePickerMediaType_Audio = 1 << 3,
    KZ_ImagePickerMediaType_All = (KZ_ImagePickerMediaType_Unknown | KZ_ImagePickerMediaType_Image | KZ_ImagePickerMediaType_Video | KZ_ImagePickerMediaType_Audio)
};

typedef NS_ENUM(NSInteger, KZ_AssetMediaType) {
    KZ_AssetMediaType_Unknown = 0,
    KZ_AssetMediaType_Image = 1,
    KZ_AssetMediaType_Video = 2,
    KZ_AssetMediaType_Audio = 3,
};

extern NSString *const KZ_ImagePickerFileMediaType;
extern NSString *const KZ_ImagePickerThumbnail;
extern NSString *const KZ_ImagePickerFullImage;
extern NSString *const KZ_ImagePickerVideoFilename;
extern NSString *const KZ_ImagePickerVideoFilePathURL;
extern NSString *const KZ_ImagePickerVideoFilePathString;
