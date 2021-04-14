/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SFAirDropViewServiceHostProtocol.h>

@protocol SFAirDropViewControllerDelegate;
@class _SFAirDropRemoteViewController, NSExtension, NSString;

@interface SFAirDropViewController : UIViewController <SFAirDropViewServiceHostProtocol> {

	_SFAirDropRemoteViewController* _childViewController;
	id _extensionRequest;
	id<SFAirDropViewControllerDelegate> _delegate;
	NSExtension* _extension;

}

@property (nonatomic,retain) NSExtension * extension;                                          //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic,__weak) id<SFAirDropViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SFAirDropViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SFAirDropViewControllerDelegate>)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(void)viewDidLoad;
-(id)_containedRemoteViewController;
-(void)_setChildViewController:(id)arg1 ;
-(id)initWithNoContentView:(BOOL)arg1 ;
-(void)airDropViewServiceDidSuccessfullyStartTransfer;
-(void)airDropViewServiceDidSuccessfullyCompleteTransfer;
-(void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)airDropViewServiceDidRequestDismissal;
-(void)_setExtensionRequest:(id)arg1 ;
@end

