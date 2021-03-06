/*****************************************************************************
 * VLCHUDTextFieldCell.h: Custom textfield cell UI for dark HUD Panels
 *****************************************************************************
 * Copyright (C) 2016 VLC authors and VideoLAN
 * $Id: 00d5bcdfc6f9019fa583a4f3500a9254bcfae080 $
 *
 * Authors: Marvin Scholz <epirat07 -at- gmail -dot- com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#import <Cocoa/Cocoa.h>

@interface VLCHUDTextFieldCell : NSTextFieldCell

@property NSColor *enabledTextColor;
@property NSColor *disabledTextColor;

@property CGFloat  borderWidth;
@property NSColor *enabledBorderColor;
@property NSColor *disabledBorderColor;

@property NSColor *enabledBackgroundColor;
@property NSColor *disabledBackgroundColor;

@end
