
Pod::Spec.new do |s|

    s.name = 'KZ_PhotoAlbum'
    s.version = '0.1'
    s.summary = 'iOS Photo Album.'
    s.homepage = 'https://github.com/KieronZhang/KZ_PhotoAlbum'
    s.license = {:type => 'MIT', :file => 'LICENSE'}
    s.author = {'KieronZhang.' => 'https://github.com/KieronZhang'}
    s.platform = :ios, '8.0'
    s.source = {:git => 'https://github.com/KieronZhang/KZ_PhotoAlbum.git', :tag => s.version, :submodules => true}
    s.xcconfig = {'OTHER_LDFLAGS' => '-ObjC'}
    s.resource = 'KZ_PhotoAlbum/PhotoAlbum.bundle'
    s.frameworks = 'UIKit', 'Foundation'
    s.vendored_frameworks = 'KZ_PhotoAlbum/KZ_PhotoAlbumFramework.framework'
    s.requires_arc = true

    s.dependency 'KZ_VideoPlayer'
    s.dependency 'KZ_Categories'
    s.dependency 'KZ_MacroDefinition'
    s.dependency 'KZ_ReuseScrollView'
    s.dependency 'MBProgressHUD'

end
