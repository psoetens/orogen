#ifndef <%= name.upcase %>_TOOLKIT_TYPES_HPP
#define <%= name.upcase %>_TOOLKIT_TYPES_HPP

<% for file in loads %>
<%= File.read(file) %>
<% end %>

#endif

