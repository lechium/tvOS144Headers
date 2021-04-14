//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class MCMPOSIXUser, NSString, NSURL;

@interface MCMUserIdentity : NSObject <NSCopying>
{
    NSURL *_homeDirectoryURL;	// 8 = 0x8
    unsigned int _kernelPersonaID;	// 16 = 0x10
    int _personaType;	// 20 = 0x14
    NSString *_personaUniqueString;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    MCMPOSIXUser *_posixUser;	// 40 = 0x28
}

+ (id)_identifierForPOSIXUID:(unsigned int)arg1 personaUniqueString:(id)arg2 personaType:(int)arg3;	// IMP=0x000000010005eccc
+ (_Bool)isUserIdentityRequiredForContainerClass:(unsigned long long)arg1;	// IMP=0x000000010005ebc0
+ (id)userIdentityWithPlist:(id)arg1 cache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000010005eb44
- (void).cxx_destruct;	// IMP=0x000000010005e6a0
@property(readonly, nonatomic) int personaType; // @synthesize personaType=_personaType;
@property(readonly, nonatomic) NSURL *homeDirectoryURL; // @synthesize homeDirectoryURL=_homeDirectoryURL;
@property(readonly, nonatomic) MCMPOSIXUser *posixUser; // @synthesize posixUser=_posixUser;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned int kernelPersonaID; // @synthesize kernelPersonaID=_kernelPersonaID;
@property(readonly, nonatomic) NSString *personaUniqueString; // @synthesize personaUniqueString=_personaUniqueString;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005e58c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005e510
- (_Bool)isEqualToUserIdentity:(id)arg1;	// IMP=0x000000010005e4fc
- (unsigned long long)hash;	// IMP=0x000000010005e4ec
- (id)_descriptionForPersonaType:(int)arg1;	// IMP=0x000000010005e4b0
@property(readonly, nonatomic) NSString *shortDescription;
- (id)description;	// IMP=0x000000010005e3d0
- (id)userIdentityWithPOSIXUser:(id)arg1;	// IMP=0x000000010005e2ac
@property(readonly, nonatomic) _Bool homeDirectoryExists;
@property(readonly, nonatomic, getter=isNoSpecificPersona) _Bool noSpecificPersona;
@property(readonly, nonatomic, getter=isDataSeparated) _Bool dataSeparated;
@property(readonly, nonatomic, getter=isHomeDirectoryInCommonSandbox) _Bool homeDirectoryInCommonSandbox;
@property(readonly, copy, nonatomic) id plist;
- (id)initWithVersion2PlistDictionary:(id)arg1 cache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000010005d60c
- (id)initWithVersion1PlistDictionary:(id)arg1 cache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000010005d0b4
- (id)initWithPlist:(id)arg1 cache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000010005cf54
- (id)initWithPOSIXUser:(id)arg1 homeDirectoryURL:(id)arg2 personaUniqueString:(id)arg3 personaType:(int)arg4 kernelPersonaID:(unsigned int)arg5;	// IMP=0x000000010005cc34
- (id)init;	// IMP=0x000000010005cb80

@end

