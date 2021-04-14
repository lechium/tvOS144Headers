/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDictionary;


@protocol PGQuestion <NSObject>
@property (nonatomic,copy,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short entityType; 
@property (nonatomic,readonly) unsigned short displayType; 
@property (nonatomic,readonly) double localFactoryScore; 
@property (assign,nonatomic) double score; 
@property (nonatomic,copy,readonly) NSDictionary * additionalInfo; 
@required
-(unsigned short)type;
-(unsigned short)state;
-(void)remove;
-(double)score;
-(unsigned short)displayType;
-(NSDictionary *)additionalInfo;
-(void)setScore:(double)arg1;
-(unsigned short)entityType;
-(NSString *)entityIdentifier;
-(void)persistWithCreationDate:(id)arg1;
-(double)localFactoryScore;
-(BOOL)isEquivalentToPersistedQuestion:(id)arg1;

@end
