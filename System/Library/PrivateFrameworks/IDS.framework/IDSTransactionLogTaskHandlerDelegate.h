/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IDSTransactionLogTaskHandlerDelegate
@required
-(void)taskHandler:(id)arg1 groupsWithGroupIDs:(id)arg2 completion:(/*^block*/id)arg3;
-(void)taskHandler:(id)arg1 participantsWithDestinations:(id)arg2 completion:(/*^block*/id)arg3;
-(void)taskHandler:(id)arg1 messagesFromToken:(id)arg2 completion:(/*^block*/id)arg3;
-(void)taskHandler:(id)arg1 persistToken:(id)arg2 completion:(/*^block*/id)arg3;
-(void)persistedTokenForTaskHandler:(id)arg1 completion:(/*^block*/id)arg2;
-(void)taskHandler:(id)arg1 accountInfoForAliases:(id)arg2 completion:(/*^block*/id)arg3;

@end
