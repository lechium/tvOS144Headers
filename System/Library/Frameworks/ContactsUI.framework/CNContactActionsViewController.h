/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNAvatarCardActionList.h>

@protocol CNContactActionsViewControllerDelegate;
@class NSString;

@interface CNContactActionsViewController : UIViewController <CNAvatarCardActionList> {

	id<CNContactActionsViewControllerDelegate> _delegate;
	long long _actionsOrder;

}

@property (assign,nonatomic) BOOL actionsReversed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CNContactActionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long actionsOrder;                                                  //@synthesize actionsOrder=_actionsOrder - In the implementation block
+(id)supportedActionTypes;
+(id)descriptorForRequiredKeysForActionTypes:(id)arg1 ;
-(id<CNContactActionsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNContactActionsViewControllerDelegate>)arg1 ;
-(id)initWithContact:(id)arg1 actionTypes:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 actionTypes:(id)arg2 ;
-(void)startTrackingRolloverWithGestureRecognizer:(id)arg1 ;
-(void)stopTrackingRollover;
-(long long)actionsOrder;
-(void)setActionsOrder:(long long)arg1 ;
-(void)setActionsReversed:(BOOL)arg1 ;
-(BOOL)actionsReversed;
@end

