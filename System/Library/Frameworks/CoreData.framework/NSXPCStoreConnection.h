/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCStore, NSXPCConnection;

@interface NSXPCStoreConnection : NSObject {

	NSXPCStore* _store;
	NSXPCConnection* _connection;

}
-(void)dealloc;
-(void)disconnect;
-(id)initForStore:(id)arg1 ;
-(void)sendMessageWithContext:(id)arg1 ;
-(id)createConnectionWithOptions:(id)arg1 ;
-(id)sendMessage:(id)arg1 store:(id)arg2 error:(id*)arg3 ;
-(void)reconnect;
@end

