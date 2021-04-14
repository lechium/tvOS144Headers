//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCMContainerPath, MCMLibraryRepairForUser, MCMPOSIXUser, NSString, NSURL;

@interface MCMContainerSchemaContext : NSObject
{
    unsigned short _posixMode;	// 8 = 0x8
    int _dataProtectionClass;	// 12 = 0xc
    NSURL *_homeDirectoryURL;	// 16 = 0x10
    MCMContainerPath *_containerPath;	// 24 = 0x18
    MCMPOSIXUser *_posixOwner;	// 32 = 0x20
    unsigned long long _containerClass;	// 40 = 0x28
    MCMLibraryRepairForUser *_libraryRepair;	// 48 = 0x30
    NSString *_identifier;	// 56 = 0x38
}

+ (id)contextWithHomeDirectoryURL:(id)arg1 containerPath:(id)arg2 POSIXMode:(unsigned short)arg3 POSIXOwner:(id)arg4 containerClass:(unsigned long long)arg5 dataProtectionClass:(int)arg6 libraryRepair:(id)arg7 identifier:(id)arg8;	// IMP=0x000000010001a65c
- (void).cxx_destruct;	// IMP=0x000000010001a608
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) MCMLibraryRepairForUser *libraryRepair; // @synthesize libraryRepair=_libraryRepair;
@property(readonly, nonatomic) int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
@property(readonly, nonatomic) MCMPOSIXUser *posixOwner; // @synthesize posixOwner=_posixOwner;
@property(readonly, nonatomic) unsigned short posixMode; // @synthesize posixMode=_posixMode;
@property(readonly, nonatomic) MCMContainerPath *containerPath; // @synthesize containerPath=_containerPath;
@property(readonly, nonatomic) NSURL *homeDirectoryURL; // @synthesize homeDirectoryURL=_homeDirectoryURL;
- (id)initWithHomeDirectoryURL:(id)arg1 containerPath:(id)arg2 POSIXMode:(unsigned short)arg3 POSIXOwner:(id)arg4 containerClass:(unsigned long long)arg5 dataProtectionClass:(int)arg6 libraryRepair:(id)arg7 identifier:(id)arg8;	// IMP=0x000000010001a48c

@end

