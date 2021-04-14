/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/MSViewServiceHostProtocol.h>

@protocol MSViewServiceHostProtocol;
@class NSString;

@interface _MSRemoteViewController : _UIRemoteViewController <MSViewServiceHostProtocol> {

	id<MSViewServiceHostProtocol> _host;

}

@property (assign,nonatomic,__weak) id<MSViewServiceHostProtocol> host;              //@synthesize host=_host - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<MSViewServiceHostProtocol>)host;
-(void)setHost:(id<MSViewServiceHostProtocol>)arg1 ;
-(void)requestDismiss;
@end
