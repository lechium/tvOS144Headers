//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TCCDAccessIndirectObject, TCCDService;

@interface TCCDAccessObject : NSObject
{
    TCCDService *_serviceObject;	// 8 = 0x8
    TCCDAccessIndirectObject *_indirectObject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001a054
@property(retain) TCCDAccessIndirectObject *indirectObject; // @synthesize indirectObject=_indirectObject;
@property(retain) TCCDService *serviceObject; // @synthesize serviceObject=_serviceObject;
- (id)description;	// IMP=0x0000000100019eb8
- (id)initWithService:(id)arg1 indirectObject:(id)arg2;	// IMP=0x0000000100019e10

@end

