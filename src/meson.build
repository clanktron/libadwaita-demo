demo_app_sources = [
  'main.c',
  'demo-app-application.c',
  'demo-app-window.c',
]

demo_app_deps = [
  dependency('gtk4'),
  dependency('libadwaita-1', version: '>= 1.4'),
]

demo_app_sources += gnome.compile_resources('demo-app-resources',
  'demo-app.gresource.xml',
  c_name: 'demo_app'
)

executable('demo-app', demo_app_sources,
  dependencies: demo_app_deps,
       install: true,
)
