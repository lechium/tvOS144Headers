//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASSwapModeling-Protocol.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSUserDefaults, _DASAppResumePLLogger;
@protocol OS_dispatch_queue, OS_os_log;

@interface _DASSwapModelApplicationKills : NSObject <_DASSwapModeling>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_todaysKillHistogram;	// 16 = 0x10
    NSDictionary *_historicalKillHistogram;	// 24 = 0x18
    NSMutableSet *_zerosSet;	// 32 = 0x20
    _DASAppResumePLLogger *_pLLogger;	// 40 = 0x28
    NSObject<OS_os_log> *_log;	// 48 = 0x30
    NSDate *_lastSnapshotTime;	// 56 = 0x38
    NSUserDefaults *_killDefaults;	// 64 = 0x40
}

+ (id)histogramEventStream;	// IMP=0x0000000100041288
- (void).cxx_destruct;	// IMP=0x0000000100042c10
@property(retain, nonatomic) NSUserDefaults *killDefaults; // @synthesize killDefaults=_killDefaults;
@property(retain, nonatomic) NSDate *lastSnapshotTime; // @synthesize lastSnapshotTime=_lastSnapshotTime;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) _DASAppResumePLLogger *pLLogger; // @synthesize pLLogger=_pLLogger;
@property(retain, nonatomic) NSMutableSet *zerosSet; // @synthesize zerosSet=_zerosSet;
@property(retain, nonatomic) NSDictionary *historicalKillHistogram; // @synthesize historicalKillHistogram=_historicalKillHistogram;
@property(retain, nonatomic) NSMutableDictionary *todaysKillHistogram; // @synthesize todaysKillHistogram=_todaysKillHistogram;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)updateScores;	// IMP=0x0000000100042b64
- (id)scoresForAllApplicationsAtDate:(id)arg1;	// IMP=0x0000000100042838
- (double)scoreForApplication:(id)arg1 atDate:(id)arg2;	// IMP=0x0000000100042790
- (void)incorporateLatestJetsamStatistics;	// IMP=0x0000000100041ff8
- (_Bool)process:(id)arg1 inSet:(id)arg2;	// IMP=0x0000000100041e60
- (id)appsRecentlyForegrounded;	// IMP=0x0000000100041e4c
- (double)secondsFrom:(unsigned long long)arg1 until:(unsigned long long)arg2;	// IMP=0x0000000100041dd0
- (void)registerDailyModelUpdateTask;	// IMP=0x0000000100041c20
- (void)updateModel;	// IMP=0x0000000100041ac0
- (id)_queue_computeScores;	// IMP=0x0000000100041748
- (void)_queue_updateHistograms;	// IMP=0x0000000100041628
- (void)_queue_loadHistograms;	// IMP=0x0000000100041338
- (id)queryForHistogramWithIdentifier:(id)arg1;	// IMP=0x00000001000412a4
- (id)init;	// IMP=0x00000001000410d4

@end

