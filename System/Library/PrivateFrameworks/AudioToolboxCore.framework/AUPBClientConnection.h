/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AUPBInspecting;
@class NSXPCConnection;

@interface AUPBClientConnection : NSObject {

	NSXPCConnection* xpcconnection;
	id<AUPBInspecting> proxyInterface;

}

@property (nonatomic,retain) NSXPCConnection * xpcconnection; 
@property (nonatomic,retain) id<AUPBInspecting> proxyInterface; 
-(NSXPCConnection *)xpcconnection;
-(id<AUPBInspecting>)proxyInterface;
-(void)setXpcconnection:(NSXPCConnection *)arg1 ;
-(void)setProxyInterface:(id<AUPBInspecting>)arg1 ;
@end

