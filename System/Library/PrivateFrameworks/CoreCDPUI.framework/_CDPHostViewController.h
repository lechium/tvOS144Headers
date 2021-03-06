/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CDPHostInterface.h>

@protocol NSCopying;
@class NSExtension;

@interface _CDPHostViewController : _UIRemoteViewController <CDPHostInterface> {

	id<NSCopying> _request;
	NSExtension* _weakExtension;
	/*^block*/id _viewServiceTerminationBlock;

}

@property (nonatomic,retain) id<NSCopying> request;                           //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) NSExtension * weakExtension;              //@synthesize weakExtension=_weakExtension - In the implementation block
@property (nonatomic,copy) id viewServiceTerminationBlock;                    //@synthesize viewServiceTerminationBlock=_viewServiceTerminationBlock - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)dealloc;
-(id<NSCopying>)request;
-(void)setRequest:(id<NSCopying>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)hostKeyboardOffset:(/*^block*/id)arg1 ;
-(double)_keyboardHeightOffset;
-(NSExtension *)weakExtension;
-(void)setWeakExtension:(NSExtension *)arg1 ;
-(id)viewServiceTerminationBlock;
-(void)setViewServiceTerminationBlock:(id)arg1 ;
@end

