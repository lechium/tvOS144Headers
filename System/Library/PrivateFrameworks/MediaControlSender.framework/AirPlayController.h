/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AirPlayControllerAsync.h>
#import <libobjc.A.dylib/AirPlayControllerSync.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSXPCConnection;

@interface AirPlayController : NSObject <AirPlayControllerAsync, AirPlayControllerSync> {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _xpcName;
	NSXPCConnection* _cnx;

}

@property (nonatomic,copy) NSString * xpcName;              //@synthesize xpcName=_xpcName - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)_setupConnection;
-(int)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id*)arg4 ;
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 ;
-(id)getProperty:(id)arg1 qualifier:(id)arg2 status:(int*)arg3 ;
-(int)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 ;
-(void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)xpcName;
-(void)setXpcName:(NSString *)arg1 ;
@end

