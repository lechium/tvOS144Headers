/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection, NSLock;

@interface ACDDataclassOwnersManager : NSObject {

	NSXPCConnection* _connection;
	NSLock* _connectionLock;

}
-(id)init;
-(BOOL)isPerformingDataclassActionsForAccount:(id)arg1 ;
-(BOOL)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 withError:(id*)arg4 ;
-(void)preloadDataclassOwnersWithError:(id*)arg1 ;
-(id)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id*)arg3 ;
-(id)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id*)arg3 ;
-(id)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id*)arg3 ;
-(id)_dataclassOwnersManagerConnection;
-(id)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id*)arg3 ;
@end

