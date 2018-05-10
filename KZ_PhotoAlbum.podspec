
Pod::Spec.new do |s|

    s.name = 'KZ_PhotoAlbum'
    s.version = '0.1.2'
    s.summary = 'iOS Photo Album.'
    s.homepage = 'https://github.com/KieronZhang/KZ_PhotoAlbum'
    s.license = {:type => 'MIT', :file => 'LICENSE'}
    s.author = {'KieronZhang' => 'https://github.com/KieronZhang'}

    s.source = {:git => 'https://github.com/KieronZhang/KZ_PhotoAlbum.git', :tag => s.version, :submodules => true}
    s.xcconfig = {'OTHER_LDFLAGS' => '-ObjC'}
    s.requires_arc = true

    s.ios.frameworks = 'Foundation', 'UIKit'

    s.ios.deployment_target = '8.0'

    s.ios.vendored_frameworks = 'KZ_PhotoAlbum/KZ_PhotoAlbum_iOS.framework'

    s.ios.resource = 'KZ_PhotoAlbum/KZ_PhotoAlbum_Bundle.bundle'

    s.dependency 'KZ_VideoPlayer'
    s.dependency 'KZ_Categories'
    s.dependency 'KZ_MacroDefinition'
    s.dependency 'KZ_ReuseScrollView'
    s.dependency 'KZ_HUD'

end
