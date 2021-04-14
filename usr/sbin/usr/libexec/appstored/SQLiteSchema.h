//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SQLiteConnection;

@interface SQLiteSchema : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100267e04
- (void)_setUserVersion:(long long)arg1;	// IMP=0x0000000100267d98
- (_Bool)tableExists:(id)arg1;	// IMP=0x0000000100267c38
- (_Bool)migrateToVersion:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001002678d8
@property(readonly) long long currentUserVersion;
- (_Bool)column:(id)arg1 existsInTable:(id)arg2;	// IMP=0x0000000100267578
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100267500

@end

