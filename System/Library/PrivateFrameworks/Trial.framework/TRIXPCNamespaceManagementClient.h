/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TRINamespaceManagementProtocol.h>

@class _PASXPCClientHelper;

@interface TRIXPCNamespaceManagementClient : NSObject <TRINamespaceManagementProtocol> {

	_PASXPCClientHelper* _helper;

}
-(id)init;
-(BOOL)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 defaultsFileURL:(id)arg3 applicationGroup:(id)arg4 cloudKitContainerId:(int)arg5 error:(id*)arg6 ;
-(BOOL)startNamespaceDownloadWithName:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)startDownloadLevelsForFactors:(id)arg1 withNamespace:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)deregisterNamespaceWithNamespaceName:(id)arg1 error:(id*)arg2 ;
@end

