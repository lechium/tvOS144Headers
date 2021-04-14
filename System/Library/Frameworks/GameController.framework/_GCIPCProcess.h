/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray;


@protocol _GCIPCProcess
@property (readonly) SCD_Struct_GC23 auditToken; 
@property (readonly) int auditSessionIdentifier; 
@property (readonly) int processIdentifier; 
@property (readonly) unsigned effectiveUserIdentifier; 
@property (readonly) unsigned effectiveGroupIdentifier; 
@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSArray * connections; 
@required
-(NSString *)bundleIdentifier;
-(int)processIdentifier;
-(SCD_Struct_GC23)auditToken;
-(unsigned)effectiveUserIdentifier;
-(int)auditSessionIdentifier;
-(unsigned)effectiveGroupIdentifier;
-(NSArray *)connections;

@end

