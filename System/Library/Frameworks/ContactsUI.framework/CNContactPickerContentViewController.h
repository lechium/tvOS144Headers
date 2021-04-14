/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UINavigationController;


@protocol CNContactPickerContentViewController <CNContactPickerServiceProtocol>
@property (assign,nonatomic,__weak) id<CNContactPickerContentDelegate> delegate; 
@property (nonatomic,readonly) UINavigationController * navigationController; 
@required
-(void)invalidate;
-(id<CNContactPickerContentDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(UINavigationController *)navigationController;
-(void)invalidateSelectionAnimated:(BOOL)arg1;

@end
