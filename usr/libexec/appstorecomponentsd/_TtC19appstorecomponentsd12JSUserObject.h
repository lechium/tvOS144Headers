//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP19appstorecomponentsdP33_C91D614A914A76D195733FCBD3F7BAEC19JSUserObjectExports_-Protocol.h"

@class MISSING_TYPE, NSNumber, NSString;

@interface _TtC19appstorecomponentsd12JSUserObject : NSObject <_TtP19appstorecomponentsdP33_C91D614A914A76D195733FCBD3F7BAEC19JSUserObjectExports_>
{
    MISSING_TYPE *accounts;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000686c8
- (id)init;	// IMP=0x00000001000686d8
- (id)cookieForUrlWithName:(id)arg1:(id)arg2;	// IMP=0x00000001000685c4
- (id)cookiesForUrl:(id)arg1;	// IMP=0x0000000100068120
@property(nonatomic, readonly) NSNumber *userAgeIfAvailable;
@property(nonatomic, readonly) _Bool isUnderThirteen;
@property(nonatomic, readonly) _Bool isManagedAppleID;
@property(nonatomic, readonly) NSString *dsid;
@property(nonatomic, readonly) NSString *accountIdentifier;
@property(nonatomic, readonly) NSString *lastName;
@property(nonatomic, readonly) NSString *firstName;

@end

