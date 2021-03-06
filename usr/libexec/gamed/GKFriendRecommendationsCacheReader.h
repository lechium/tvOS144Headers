//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKCacheReader.h"

@class NSString;

@interface GKFriendRecommendationsCacheReader : GKCacheReader
{
    NSString *_language;	// 8 = 0x8
}

+ (id)readerWithLanguage:(id)arg1 databaseConnection:(id)arg2;	// IMP=0x00000001000f1be4
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (void)readResources:(id)arg1 inDatabase:(struct sqlite3 *)arg2 statementStore:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000f1dd0
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 withPlayer:(id)arg2;	// IMP=0x00000001000f1d90
- (id)getExpirationDateStatement;	// IMP=0x00000001000f1d38
- (id)getRecommendedPlayerGCIDsStatement;	// IMP=0x00000001000f1cd4
- (void)dealloc;	// IMP=0x00000001000f1c84
- (id)initWithLanguage:(id)arg1 databaseConnection:(id)arg2;	// IMP=0x00000001000f1c20

@end

