/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@class NSMutableDictionary;

@interface MRNowPlayingOriginClientManager : NSObject <MRNowPlayingClientState> {

	NSMutableDictionary* _originClients;
	NSMutableDictionary* _originClientRequests;

}
+(id)sharedManager;
-(id)debugDescription;
-(id)init;
-(id)playerClientForPlayerPath:(id)arg1 ;
-(id)originClientForOrigin:(id)arg1 ;
-(id)localOriginClient;
-(id)clientForPlayerPath:(id)arg1 ;
-(id)playerClientRequestsForPlayerPath:(id)arg1 ;
-(id)originClientForPlayerPath:(id)arg1 ;
-(void)restoreNowPlayingClientState;
-(void)removeClient:(id)arg1 ;
-(void)removePlayer:(id)arg1 ;
-(void)removeOrigin:(id)arg1 ;
-(id)existingOriginClientRequestsForPlayerPath:(id)arg1 ;
-(void)removeOriginRequests:(id)arg1 ;
-(id)existingPlayerClientRequestsForPlayerPath:(id)arg1 ;
-(id)originClientRequestsForPlayerPath:(id)arg1 ;
-(id)clientRequestsForPlayerPath:(id)arg1 ;
-(id)existingClientRequestsForPlayerPath:(id)arg1 ;
@end

