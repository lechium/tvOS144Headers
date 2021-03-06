/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNContactContentViewControllerDelegate <CNContactViewControllerDelegate>
@optional
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
-(void)contactViewController:(id)arg1 didChangeToEditMode:(BOOL)arg2;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
-(id)contactPresentedViewController:(id)arg1;

@end

