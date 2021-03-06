/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/MAElementFilter.h>

@class KGNodeFilter, MARelation;

@interface MANodeFilter : MAElementFilter

@property (nonatomic,readonly) KGNodeFilter * kgNodeFilter; 
@property (nonatomic,readonly) MARelation * relation; 
+(BOOL)scanInstance:(out id*)arg1 withScanner:(id)arg2 ;
-(MARelation *)relation;
-(void)appendVisualStringToString:(id)arg1 ;
-(BOOL)matchesNode:(id)arg1 ;
-(KGNodeFilter *)kgNodeFilter;
@end

