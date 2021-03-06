/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@interface VCStatsRecorder : NSObject {

	opaque_pthread_rwlock_t _stateRWLock;
	SCD_Struct_VC83 _localStats[128];
	unsigned short _currentLocalStatsIndex;
	unsigned _uplinkServerStatsByteUsed;

}
-(id)init;
-(void)dealloc;
-(int)serverStatsSizeInByteForUplink:(BOOL)arg1 connection:(id)arg2 ;
-(void)updateSessionStats:(unsigned short)arg1 connection:(id)arg2 totalPacketSent:(unsigned)arg3 totalPacketReceived:(unsigned)arg4 ;
-(void)getLocalStats:(unsigned short)arg1 localSessionStats:(SCD_Struct_VC83*)arg2 ;
-(SCD_Struct_VC83)getMostRecentLocalStats;
@end

