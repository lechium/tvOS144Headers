//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP19appstorecomponentsdP33_A10F27D32A47776B15A77D0B2E4439C624JSASKGlobalObjectExports_-Protocol.h"

@class ASCJSClientObject, MISSING_TYPE, NSDictionary, _TtC19appstorecomponentsd11JSLocObject, _TtC19appstorecomponentsd12JSUserObject, _TtC19appstorecomponentsd14JSArcadeObject, _TtC19appstorecomponentsd20JSAppleSiliconObject, _TtC19appstorecomponentsd20JSStoreMetricsObject, _TtC19appstorecomponentsd22JSClientOrderingObject, _TtC19appstorecomponentsd28JSPersonalizationStoreObject;

@interface _TtC19appstorecomponentsd17JSASKGlobalObject : NSObject <_TtP19appstorecomponentsdP33_A10F27D32A47776B15A77D0B2E4439C624JSASKGlobalObjectExports_>
{
    MISSING_TYPE *client;	// 8 = 0x8
    MISSING_TYPE *loc;	// 16 = 0x10
    MISSING_TYPE *storeMetrics;	// 24 = 0x18
    MISSING_TYPE *props;	// 32 = 0x20
    MISSING_TYPE *user;	// 40 = 0x28
    MISSING_TYPE *clientOrdering;	// 48 = 0x30
    MISSING_TYPE *personalizationStore;	// 56 = 0x38
    MISSING_TYPE *arcade;	// 64 = 0x40
    MISSING_TYPE *appleSilicon;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100076384
- (id)init;	// IMP=0x0000000100076324
@property(nonatomic, readonly) _TtC19appstorecomponentsd20JSAppleSiliconObject *appleSilicon; // @synthesize appleSilicon;
@property(nonatomic, readonly) _TtC19appstorecomponentsd14JSArcadeObject *arcade; // @synthesize arcade;
@property(nonatomic, readonly) _TtC19appstorecomponentsd28JSPersonalizationStoreObject *personalizationStore; // @synthesize personalizationStore;
@property(nonatomic, readonly) _TtC19appstorecomponentsd22JSClientOrderingObject *clientOrdering; // @synthesize clientOrdering;
@property(nonatomic, readonly) _TtC19appstorecomponentsd12JSUserObject *user; // @synthesize user;
@property(nonatomic, readonly) NSDictionary *props;
@property(nonatomic, readonly) _TtC19appstorecomponentsd20JSStoreMetricsObject *storeMetrics; // @synthesize storeMetrics;
@property(nonatomic, readonly) _TtC19appstorecomponentsd11JSLocObject *loc; // @synthesize loc;
@property(nonatomic, readonly) ASCJSClientObject *client; // @synthesize client;

@end

