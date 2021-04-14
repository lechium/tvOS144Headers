/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>

@protocol GKFriendRequestComposeViewControllerDelegate;
@class NSString, UIAlertController;

@interface GKFriendRequestComposeViewController : UINavigationController {

	unsigned _rid;
	id<GKFriendRequestComposeViewControllerDelegate> _composeViewDelegate;
	NSString* _message;
	unsigned long long _recipientCount;
	UIAlertController* _alertController;

}

@property (nonatomic,copy) NSString * message;                                                                         //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) unsigned long long recipientCount;                                                        //@synthesize recipientCount=_recipientCount - In the implementation block
@property (assign,nonatomic) unsigned rid;                                                                             //@synthesize rid=_rid - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                                      //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic,__weak) id<GKFriendRequestComposeViewControllerDelegate> composeViewDelegate;              //@synthesize composeViewDelegate=_composeViewDelegate - In the implementation block
+(unsigned long long)maxNumberOfRecipients;
+(BOOL)_preventsAppearanceProxyCustomization;
-(id)init;
-(NSString *)message;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setMessage:(NSString *)arg1 ;
-(void)setRecipientCount:(unsigned long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)setRid:(unsigned)arg1 ;
-(unsigned)rid;
-(void)_setupChildViewController;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(void)sendFinishedMessageToDelegateCancelled:(BOOL)arg1 ;
-(void)prepareForNewRecipients:(id)arg1 ;
-(id<GKFriendRequestComposeViewControllerDelegate>)composeViewDelegate;
-(void)_addRecipientInternals:(id)arg1 ;
-(void)addRecipientPlayers:(id)arg1 ;
-(void)addRecipientsWithPlayerIDs:(id)arg1 ;
-(void)addRecipientsWithEmailAddresses:(id)arg1 ;
-(void)setComposeViewDelegate:(id<GKFriendRequestComposeViewControllerDelegate>)arg1 ;
-(unsigned long long)recipientCount;
@end
