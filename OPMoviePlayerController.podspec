Pod::Spec.new do |spec|
  spec.name         = 'OPMoviePlayerController'
  spec.version      = '0.1.0'
  spec.license      = { type: 'BSD' }
  spec.homepage     = 'https://github.com/mbrandonw/OPMoviePlayerController'
  spec.authors      = { 'Brandon Williams' => 'mbw234@gmail.com' }
  spec.summary      = ''
  spec.source       = { :git => 'https://github.com/mbrandonw/OPMoviePlayerController.git' }
  spec.source_files = 'OPMoviePlayerController/*.{h,m}'
  spec.requires_arc = true

  spec.frameworks = 'MediaPlayer'
end
