//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataWriter-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKFriendRecommendationsCacheWriter : NSObject <GKDataWriter>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
    NSString *_language;	// 16 = 0x10
}

+ (id)writerWithLanguage:(id)arg1 databaseConnection:(id)arg2;	// IMP=0x00000001000ea108
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000eac74
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x00000001000eaa54
- (void)bindParametersForLocalizationStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;	// IMP=0x00000001000ea988
- (id)localizationUpdateSQL;	// IMP=0x00000001000ea920
- (id)localizationInsertSQL;	// IMP=0x00000001000ea8b8
- (void)bindParametersForRecommendationStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;	// IMP=0x00000001000ea804
- (id)recommendationUpdateSQL;	// IMP=0x00000001000ea7a8
- (id)recommendationInsertSQL;	// IMP=0x00000001000ea74c
- (void)bindParametersForRelationshipStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;	// IMP=0x00000001000ea6a4
- (id)recommendationRelationshipUpdateSQL;	// IMP=0x00000001000ea648
- (id)recommendationRelationshipInsertSQL;	// IMP=0x00000001000ea5ec
- (void)bindParametersForRecommendedPlayerStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2;	// IMP=0x00000001000ea438
- (id)recommendedPlayerUpdateSQL;	// IMP=0x00000001000ea394
- (id)recommendedPlayerInsertSQL;	// IMP=0x00000001000ea2f0
- (void)bindParametersForListStatement:(struct sqlite3_stmt *)arg1 relativeToPlayer:(id)arg2 ttl:(double)arg3;	// IMP=0x00000001000ea2a4
- (id)listExpirationDateUpdateSQL;	// IMP=0x00000001000ea25c
- (id)listExpirationDateInsertSQL;	// IMP=0x00000001000ea214
- (void)dealloc;	// IMP=0x00000001000ea1c4
- (id)initWithLanguage:(id)arg1 databaseConnection:(id)arg2;	// IMP=0x00000001000ea144

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

