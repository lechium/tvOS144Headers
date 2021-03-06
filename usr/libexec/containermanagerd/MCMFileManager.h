//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCMFileManager : NSObject
{
    CDUnknownFunctionPointerType _mkstemp_dprotected_np;	// 8 = 0x8
}

+ (id)defaultManager;	// IMP=0x000000010002b7c4
- (id)fsNodeOfURL:(id)arg1 followSymlinks:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000100029b6c
- (id)copyDescriptionOfURL:(id)arg1;	// IMP=0x000000010002995c
- (_Bool)removeExclusionFromBackupFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000298cc
- (_Bool)fixUserPermissionsAtURL:(id)arg1 limitToTopLevelURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000296c4
- (unsigned long long)dataWritingOptionsForFileAtURL:(id)arg1;	// IMP=0x00000001000293b4
- (_Bool)stripACLFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000293a0
- (_Bool)_enumeratePOSIX1eACLEntriesAtURL:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100029184
- (_Bool)checkFileSystemAtURL:(id)arg1 supportsPerFileKeys:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000100028ff4
- (_Bool)checkFileSystemAtURL:(id)arg1 isCaseSensitive:(_Bool *)arg2 canAtomicSwap:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000100028dc4
- (_Bool)compareVolumeForURL:(id)arg1 versusURL:(id)arg2 isSameVolume:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000010002899c
- (_Bool)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 mode:(unsigned short)arg4 error:(id *)arg5;	// IMP=0x0000000100028240
- (id)readDataFromURL:(id)arg1 options:(unsigned long long)arg2 fsNode:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000100027df4
- (id)readDataFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100027de0
- (id)realPathForURL:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000100027c28
- (id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2;	// IMP=0x00000001000264a4
- (_Bool)_validateSymlink:(id)arg1 withStartingDepth:(unsigned int)arg2 andEndingDepth:(unsigned int *)arg3;	// IMP=0x0000000100026290
- (id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(_Bool)arg2;	// IMP=0x0000000100025fb0
- (id)_realPathWhatExistsInPath:(id)arg1;	// IMP=0x0000000100025d98
- (unsigned long long)diskUsageForURL:(id)arg1;	// IMP=0x00000001000258a4
- (unsigned long long)fastDiskUsageForURL:(id)arg1;	// IMP=0x0000000100025264
- (void)printDirectoryStructureAtURL:(id)arg1;	// IMP=0x0000000100024eac
- (_Bool)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0000000100024abc
- (_Bool)dataProtectionClassOfItemAtURL:(id)arg1 class:(int *)arg2 error:(id *)arg3;	// IMP=0x000000010002494c
- (_Bool)itemDoesNotExistAtURL:(id)arg1;	// IMP=0x000000010002492c
- (_Bool)itemAtURL:(id)arg1 followSymlinks:(_Bool)arg2 exists:(_Bool *)arg3 isDirectory:(_Bool *)arg4 fsNode:(id *)arg5 error:(id *)arg6;	// IMP=0x000000010002459c
- (_Bool)itemAtURL:(id)arg1 followSymlinks:(_Bool)arg2 exists:(_Bool *)arg3 isDirectory:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0000000100024588
- (_Bool)itemAtURL:(id)arg1 exists:(_Bool *)arg2 isDirectory:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000010002456c
- (_Bool)itemExistsAtURL:(id)arg1 isDirectory:(_Bool *)arg2;	// IMP=0x0000000100024534
- (_Bool)itemAtURL:(id)arg1 exists:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000100024520
- (_Bool)itemExistsAtURL:(id)arg1;	// IMP=0x0000000100024510
- (id)urlsForItemsInDirectoryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000240f8
- (_Bool)standardizeOwnershipAtURL:(id)arg1 toPOSIXUser:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100023ccc
- (_Bool)standardizeAllSystemContainerACLsAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100023700
- (_Bool)standardizeACLsForSystemContainerAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000236ec
- (_Bool)standardizeACLsAtURL:(id)arg1 isSystemContainer:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000001000233f8
- (_Bool)setTopLevelSystemContainerACLAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100023274
- (struct _acl *)_CopyTopLevelSystemContainerACLWithError:(id *)arg1;	// IMP=0x0000000100023188
- (struct _acl *)_CopySystemContainerACLWithNumACEs:(int)arg1 isDir:(_Bool)arg2 inheritOnly:(_Bool)arg3 withError:(id *)arg4;	// IMP=0x0000000100023060
- (_Bool)_CreateSystemUserACEInACL:(struct _acl **)arg1 withPermissions:(int)arg2 andFlags:(int)arg3 withError:(id *)arg4;	// IMP=0x0000000100022cbc
- (_Bool)_traverseDirectory:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100022898
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100022880
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 withNamePrefix:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000226c0
- (_Bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100022658
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000225f0
- (_Bool)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100022588
- (_Bool)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100022520
- (_Bool)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000001000220f0
- (_Bool)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000100021ea8
- (id)targetOfSymbolicLinkAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100021c54
- (_Bool)symbolicallyLinkURL:(id)arg1 toSymlinkTarget:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100021914
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 error:(id *)arg4;	// IMP=0x0000000100021860
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id *)arg5;	// IMP=0x00000001000217a8
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 owner:(id)arg4 error:(id *)arg5;	// IMP=0x0000000100021728
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 owner:(id)arg4 class:(int)arg5 fsNode:(id *)arg6 error:(id *)arg7;	// IMP=0x00000001000210d0
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 owner:(id)arg4 class:(int)arg5 error:(id *)arg6;	// IMP=0x0000000100021038
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100020b74
- (id)init;	// IMP=0x0000000100020b18

@end

