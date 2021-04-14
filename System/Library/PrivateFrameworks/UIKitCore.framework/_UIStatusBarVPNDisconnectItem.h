/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarVPNDisconnectView, NSTimer;

@interface _UIStatusBarVPNDisconnectItem : _UIStatusBarItem {

	_UIStatusBarVPNDisconnectView* _disconnectView;
	NSTimer* _slashBeginTimer;

}

@property (nonatomic,retain) _UIStatusBarVPNDisconnectView * disconnectView;              //@synthesize disconnectView=_disconnectView - In the implementation block
@property (nonatomic,retain) NSTimer * slashBeginTimer;                                   //@synthesize slashBeginTimer=_slashBeginTimer - In the implementation block
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)dependentEntryKeys;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(void)_create_disconnectView;
-(_UIStatusBarVPNDisconnectView *)disconnectView;
-(void)setDisconnectView:(_UIStatusBarVPNDisconnectView *)arg1 ;
-(NSTimer *)slashBeginTimer;
-(void)setSlashBeginTimer:(NSTimer *)arg1 ;
@end

