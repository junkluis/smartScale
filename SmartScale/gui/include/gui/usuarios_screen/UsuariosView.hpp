#ifndef USUARIOSVIEW_HPP
#define USUARIOSVIEW_HPP

#include <gui_generated/usuarios_screen/UsuariosViewBase.hpp>
#include <gui/usuarios_screen/UsuariosPresenter.hpp>

class UsuariosView : public UsuariosViewBase
{
public:
    UsuariosView();
    virtual ~UsuariosView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // USUARIOSVIEW_HPP
