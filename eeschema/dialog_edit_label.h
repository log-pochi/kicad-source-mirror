/////////////////////////////////////////////////////////////////////////////
// Name:        dialog_edit_label.h
// Purpose:
// Author:      jean-pierre Charras
// Modified by:
// Created:     19/02/2006 15:46:26
// RCS-ID:
// Copyright:   License GNU
// Licence:
/////////////////////////////////////////////////////////////////////////////

// Generated by DialogBlocks (unregistered), 19/02/2006 15:46:26

#ifndef _DIALOG_EDIT_LABEL_H_
#define _DIALOG_EDIT_LABEL_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/valgen.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_DIALOG 10000
#define ID_TEXTCTRL 10001
#define ID_RADIOBOX 10003
#define ID_RADIOBOX1 10004
#define ID_TEXTCTRL1 10002
#define SYMBOL_WINEDA_LABELPROPERTIESFRAME_STYLE wxDEFAULT_DIALOG_STYLE|MAYBE_RESIZE_BORDER
#define SYMBOL_WINEDA_LABELPROPERTIESFRAME_TITLE _("Dialog")
#define SYMBOL_WINEDA_LABELPROPERTIESFRAME_IDNAME ID_DIALOG
#define SYMBOL_WINEDA_LABELPROPERTIESFRAME_SIZE wxSize(400, 300)
#define SYMBOL_WINEDA_LABELPROPERTIESFRAME_POSITION wxDefaultPosition
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * WinEDA_LabelPropertiesFrame class declaration
 */

class WinEDA_LabelPropertiesFrame: public wxDialog
{
    DECLARE_DYNAMIC_CLASS( WinEDA_LabelPropertiesFrame )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    WinEDA_LabelPropertiesFrame( );
    WinEDA_LabelPropertiesFrame( WinEDA_SchematicFrame* parent,
                SCH_TEXT * CurrentText,
                const wxPoint& pos = SYMBOL_WINEDA_LABELPROPERTIESFRAME_POSITION,
            wxWindowID id = SYMBOL_WINEDA_LABELPROPERTIESFRAME_IDNAME, const wxString& caption = SYMBOL_WINEDA_LABELPROPERTIESFRAME_TITLE, const wxSize& size = SYMBOL_WINEDA_LABELPROPERTIESFRAME_SIZE, long style = SYMBOL_WINEDA_LABELPROPERTIESFRAME_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_WINEDA_LABELPROPERTIESFRAME_IDNAME, const wxString& caption = SYMBOL_WINEDA_LABELPROPERTIESFRAME_TITLE, const wxPoint& pos = SYMBOL_WINEDA_LABELPROPERTIESFRAME_POSITION, const wxSize& size = SYMBOL_WINEDA_LABELPROPERTIESFRAME_SIZE, long style = SYMBOL_WINEDA_LABELPROPERTIESFRAME_STYLE );

    /// Creates the controls and sizers
    void CreateControls();

////@begin WinEDA_LabelPropertiesFrame event handler declarations

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for wxID_OK
    void OnOkClick( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for wxID_CANCEL
    void OnCancelClick( wxCommandEvent& event );

////@end WinEDA_LabelPropertiesFrame event handler declarations

////@begin WinEDA_LabelPropertiesFrame member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end WinEDA_LabelPropertiesFrame member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();
    void TextPropertiesAccept(wxCommandEvent& event);

////@begin WinEDA_LabelPropertiesFrame member variables
    wxTextCtrl* m_TextLabel;
    wxRadioBox* m_TextOrient;
    wxRadioBox* m_TextShape;
    wxStaticText* m_SizeTitle;
    wxTextCtrl* m_TextSize;
////@end WinEDA_LabelPropertiesFrame member variables

   WinEDA_SchematicFrame * m_Parent;
    SCH_TEXT * m_CurrentText;

};

#endif
    // _DIALOG_EDIT_LABEL_H_
