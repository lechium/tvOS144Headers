/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface NWPrivilegedHelper : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listener;
	NSMutableDictionary* _handlers;
	NSMutableSet* _allKnownEntitlementSet;
	NSMutableArray* _allKnownEntitlementGroup;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_xpc_object> listener;                      //@synthesize listener=_listener - In the implementation block
@property (retain) NSMutableDictionary * handlers;                         //@synthesize handlers=_handlers - In the implementation block
@property (retain) NSMutableSet * allKnownEntitlementSet;                  //@synthesize allKnownEntitlementSet=_allKnownEntitlementSet - In the implementation block
@property (retain) NSMutableArray * allKnownEntitlementGroup;              //@synthesize allKnownEntitlementGroup=_allKnownEntitlementGroup - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_xpc_object>)listener;
-(void)setListener:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)setHandlers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)handlers;
-(void)registerHandlerFunction:(/*function pointer*/void*)arg1 type:(int)arg2 allowedEntitlementGroup:(id)arg3 ;
-(void)registerHelperFunctions;
-(BOOL)startXPCListener;
-(void)startThrottlePolicyEventListener;
-(void)handleRequest:(id)arg1 onConnection:(id)arg2 ;
-(NSMutableSet *)allKnownEntitlementSet;
-(void)setAllKnownEntitlementSet:(NSMutableSet *)arg1 ;
-(NSMutableArray *)allKnownEntitlementGroup;
-(void)setAllKnownEntitlementGroup:(NSMutableArray *)arg1 ;
@end

