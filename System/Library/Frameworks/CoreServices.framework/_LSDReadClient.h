/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/_LSDClient.h>
#import <libobjc.A.dylib/_LSDReadProtocol.h>

@interface _LSDReadClient : _LSDClient <_LSDReadProtocol>
-(void)getResourceValuesForKeys:(id)arg1 URL:(id)arg2 preferredLocalizations:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getTypeRecordWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getTypeRecordsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getTypeRecordWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getTypeRecordsWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getTypeRecordForImportedTypeWithIdentifier:(id)arg1 conformingToIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getRelatedTypesOfTypeWithIdentifier:(id)arg1 maximumDegreeOfSeparation:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getWhetherTypeIdentifier:(id)arg1 conformsToTypeIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getExtensionPointRecordWithIdentifier:(id)arg1 platform:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getExtensionPointRecordForCurrentProcessWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getLocalizedNameWithBundleType:(id)arg1 bundleIdentifier:(id)arg2 bundleUUID:(id)arg3 context:(id)arg4 shortNameOnly:(BOOL)arg5 preferredLocalizations:(id)arg6 validationToken:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)getServerStoreNonBlockingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getServerStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)mapBundleIdentifiers:(id)arg1 orMachOUUIDs:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getDiskUsage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resolveQueries:(id)arg1 legacySPI:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getServerStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getKernelPackageExtensionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getBundleRecordForCurrentProcessWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getBundleRecordForCoreTypesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)willHandleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)getBundleProxyForCurrentProcessWithCompletionHandler:(/*^block*/id)arg1 ;
@end

