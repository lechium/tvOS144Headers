//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VCPClientHandler.h"

#import "VCPMediaAnalysisServerProtocol-Protocol.h"

@class NSMutableDictionary, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, VCPMediaAnalysisClientProtocol;

@interface VCPMediaAnalysisClientHandler : VCPClientHandler <VCPMediaAnalysisServerProtocol>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <VCPMediaAnalysisClientProtocol> _clientProxy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_managementQueue;	// 24 = 0x18
    NSMutableDictionary *_taskIDMapping;	// 32 = 0x20
}

+ (id)errorForStatus:(int)arg1;	// IMP=0x000000010001fd90
+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x000000010001fd24
- (void).cxx_destruct;	// IMP=0x000000010002ae38
- (void)requestVIPModelStorageFilepathForPhotoLibraryURL:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002ac18
- (void)requestPersonPreferenceForPhotoLibraryURL:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002a9f8
- (void)requestRebuildPersons:(int)arg1 withLocalIdentifiers:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010002a104
- (void)requestReclusterFaces:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100029848
- (void)requestResetFaceClusteringState:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100028f8c
- (void)requestClusterCacheValidation:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000286a8
- (void)requestPersonPromoterStatus:(int)arg1 withAdvancedFlag:(_Bool)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100027db8
- (void)requestSuggestedMePersonIdentifier:(int)arg1 withContext:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100027490
- (void)requestResetFaceClassificationModel:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100026b38
- (void)requestFaceCandidatesforKeyFace:(int)arg1 withPersonsWithLocalIdentifiers:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100026210
- (void)requestUpdateKeyFacesOfPersons:(int)arg1 withLocalIdentifiers:(id)arg2 andForceUpdate:(_Bool)arg3 andPhotoLibraryURL:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x00000001000258b8
- (void)requestSuggestedPersons:(int)arg1 withPersonWithLocalIdentifier:(id)arg2 toBeConfirmedPersonSuggestions:(id)arg3 toBeRejectedPersonSuggestions:(id)arg4 andPhotoLibraryURL:(id)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100024e50
- (void)cancelBackgroundActivityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024cec
- (void)notifyLibraryAvailableAtURL:(id)arg1;	// IMP=0x0000000100024ab4
- (void)cancelAllRequests;	// IMP=0x00000001000247a0
- (void)cancelRequest:(int)arg1;	// IMP=0x00000001000244e0
- (void)requestAssetProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 forLocalIdentifiers:(id)arg3 fromPhotoLibraryWithURL:(id)arg4 withOptions:(id)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100023424
- (void)requestLibraryProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 forPhotoLibraryURL:(id)arg3 withOptions:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100021f4c
- (void)_resetProcessingStatusForTaskID:(unsigned long long)arg1 andPhotoLibrary:(id)arg2;	// IMP=0x0000000100021de4
- (void)requestAssetAnalysis:(int)arg1 forPhotoLibraryURL:(id)arg2 withLocalIdentifiers:(id)arg3 realTime:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x00000001000211e8
- (void)requestURLAssetAnalysis:(int)arg1 forAssetWithResourcePaths:(id)arg2 withOptions:(id)arg3 analysisTypes:(unsigned long long)arg4 sandboxTokens:(id)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x000000010001feac
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x000000010001f7f0
- (id)init;	// IMP=0x000000010001f7d8

@end
