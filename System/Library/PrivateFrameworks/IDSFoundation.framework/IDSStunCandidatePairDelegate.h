/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IDSStunCandidatePairDelegate <NSObject>
@required
-(void)candidatePair:(id)arg1 didReceiveSessionInfo:(id)arg2 success:(BOOL)arg3;
-(void)candidatePair:(id)arg1 didReceiveStunErrorResponse:(long long)arg2 errorCode:(unsigned short)arg3;
-(void)candidatePair:(id)arg1 didAddQREvent:(id)arg2;
-(void)disconnectCandidatePair:(id)arg1;
-(void)sendAllocbindRequest:(id)arg1 isRealloc:(BOOL)arg2 inResponseToNoSessionState:(BOOL)arg3;
-(void)sendProbingRequestWithoptions:(id)arg1 candidatePairToken:(id)arg2;

@end

