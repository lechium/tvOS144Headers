/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_xpc_object;
#import <CoreSpotlight/CoreSpotlight-Structs.h>
@class NSString, NSObject;

@interface CSXPCConnection : NSObject {

	BOOL _machService;
	BOOL _listener;
	BOOL _nonLaunching;
	BOOL _privateDaemon;
	unsigned _user;
	NSString* _uuid;
	NSString* _serviceName;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) unsigned user;                                    //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BOOL machService;                               //@synthesize machService=_machService - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                         //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) BOOL listener;                                  //@synthesize listener=_listener - In the implementation block
@property (assign,nonatomic) BOOL nonLaunching;                                //@synthesize nonLaunching=_nonLaunching - In the implementation block
@property (assign,nonatomic) BOOL privateDaemon;                               //@synthesize privateDaemon=_privateDaemon - In the implementation block
+(void)dictionary:(id)arg1 setStringArray:(id)arg2 forKey:(const char*)arg3 ;
+(id)copyNSStringForKey:(const char*)arg1 fromXPCDictionary:(id)arg2 ;
+(id)copyNSStringArrayFromXPCArray:(id)arg1 ;
+(id)dataWrapperForKey:(const char*)arg1 sizeKey:(const char*)arg2 fromXPCDictionary:(id)arg3 ;
+(id)copyNSDataForKey:(const char*)arg1 fromXPCDictionary:(id)arg2 ;
+(id)dataWrapperForKey:(const char*)arg1 sizeKey:(const char*)arg2 fromXPCDictionary:(id)arg3 allowWritableSharedMemory:(BOOL)arg4 ;
+(BOOL)journalEnabled;
+(id)processNameForPID:(int)arg1 ;
+(id)copyNSNumberArrayFromXPCArray:(id)arg1 ;
+(id)copyNSStringSetFromXPCArray:(id)arg1 ;
+(void)dictionary:(id)arg1 setNumberArray:(id)arg2 forKey:(const char*)arg3 ;
+(BOOL)dictionary:(id)arg1 setSharedMemory:(void*)arg2 forKey:(const char*)arg3 size:(unsigned long long)arg4 forSizeKey:(const char*)arg5 ;
+(id)appIdentifierFromTeamAppTuple:(id)arg1 ;
+(void)setJournalEnabled:(BOOL)arg1 ;
+(id)copyPlistFromXPCObject:(id)arg1 ;
+(void)journalDictionary:(id)arg1 toFolderPath:(const char*)arg2 forPID:(int)arg3 withLabel:(const char*)arg4 andID:(unsigned long long)arg5 ;
-(unsigned)user;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setUser:(unsigned)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)serviceName;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)listener;
-(NSString *)uuid;
-(void)handleError:(id)arg1 ;
-(void)setPrivateDaemon:(BOOL)arg1 ;
-(void)sendMessageAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNonLaunching:(BOOL)arg1 ;
-(void)handleReply:(id)arg1 ;
-(void)sendMessageAsync:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 machService:(BOOL)arg2 uuid:(id)arg3 ;
-(id)initWithServiceName:(id)arg1 machService:(BOOL)arg2 ;
-(BOOL)addClientConnectionIfAllowedForConnection:(id)arg1 ;
-(BOOL)handleMessage:(id)arg1 type:(xpc_type_sRef)arg2 connection:(id)arg3 ;
-(BOOL)handleCommand:(const char*)arg1 info:(id)arg2 connection:(id)arg3 ;
-(void)_lostClientConnection:(id)arg1 error:(id)arg2 ;
-(BOOL)lostClientConnection:(id)arg1 error:(id)arg2 ;
-(void)startListener;
-(id)initListenerWithName:(id)arg1 ;
-(id)initMachServiceListenerWithName:(id)arg1 ;
-(void)_setUser:(unsigned)arg1 ;
-(BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg1 ;
-(BOOL)machService;
-(BOOL)nonLaunching;
-(BOOL)privateDaemon;
@end

