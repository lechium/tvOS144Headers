/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFMessageFilter.h>

@class HMDXPCClientConnection;

@interface HMDXPCMessageFilter : HMFMessageFilter {

	HMDXPCClientConnection* _connection;

}

@property (readonly) HMDXPCClientConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(BOOL)canInitWithMessage:(id)arg1 ;
+(id)policyClasses;
-(HMDXPCClientConnection *)connection;
-(id)initWithMessage:(id)arg1 ;
@end
