/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNAvatarCardControllerDelegate <NSObject>
@optional
-(long long)avatarCardController:(id)arg1 presentationResultForLocation:(CGPoint)arg2;
-(id)avatarCardController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
-(void)avatarCardController:(id)arg1 willShowActions:(id)arg2;
-(BOOL)avatarCardController:(id)arg1 shouldShowContact:(id)arg2;
-(void)avatarCardControllerWillDismiss:(id)arg1;
-(void)avatarCardControllerDidDismiss:(id)arg1;
-(BOOL)avatarCardController:(id)arg1 shouldPresentForLocation:(CGPoint)arg2;

@required
-(id)presentingViewControllerForAvatarCardController:(id)arg1;

@end

