/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SAML/SAML-Structs.h>
@interface XMLWrapperQuery : NSObject
+(void)initialize;
-(void)registerNamespace:(id)arg1 ;
-(id)executeXpathQuery:(xmlDoc*)arg1 query:(id)arg2 ctxNode:(xmlNode*)arg3 error:(id*)arg4 ;
-(BOOL)registerXpathNamespacesForCtx:(xmlXPathContext*)arg1 error:(id*)arg2 ;
-(id)elementForNode:(xmlNode*)arg1 ;
-(id)searchNodeWithXpathQuery:(xmlNode*)arg1 query:(id)arg2 error:(id*)arg3 ;
@end

