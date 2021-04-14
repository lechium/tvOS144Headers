/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactNavigationControllerDelegate.h>

@protocol CNVCardViewControllerDelegate;
@class NSArray, CNContactNavigationController, NSString;

@interface CNVCardViewController : UIViewController <CNContactNavigationControllerDelegate> {

	id<CNVCardViewControllerDelegate> _delegate;
	NSArray* _contacts;

}

@property (nonatomic,retain) NSArray * contacts;                                                         //@synthesize contacts=_contacts - In the implementation block
@property (assign,nonatomic,__weak) id<CNVCardViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNContactNavigationController * contactNavigationController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CNVCardViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNVCardViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
-(void)contactNavigationControllerDidComplete:(id)arg1 ;
-(void)contactNavigationControllerDidCancel:(id)arg1 ;
-(id)contactNavigationController:(id)arg1 contactViewControllerForContact:(id)arg2 preferredMode:(long long)arg3 ;
-(id)initWithVCardData:(id)arg1 ;
-(CNContactNavigationController *)contactNavigationController;
@end

