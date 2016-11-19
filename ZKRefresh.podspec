Pod::Spec.new do |s|
    s.name         = 'ZKRefresh'
    s.version      = '0.1.0'
    s.summary      = 'Pull-to-refresh, based on MJRefresh 3.1.12 but rewrote all code almostly'
    s.homepage     = 'https://github.com/doggy/ZKRefresh'
    s.license      = 'MIT'
    s.authors      = {'doggy' => 'doggy8@gmail.com'}
    s.platform     = :ios, '6.0'
    s.source       = {:git => 'https://github.com/doggy/ZKRefresh.git', :tag => s.version}
    s.source_files = 'ZKRefresh/**/*.{h,m}'
    s.requires_arc = true
    s.framework    = "UIKit"
end