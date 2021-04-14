/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface ADConfigurationRequest : PBRequest <NSCopying> {

	NSMutableArray* _currentConfigurations;
	NSData* _iAdID;

}

@property (nonatomic,retain) NSMutableArray * currentConfigurations;              //@synthesize currentConfigurations=_currentConfigurations - In the implementation block
@property (nonatomic,readonly) BOOL hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                                      //@synthesize iAdID=_iAdID - In the implementation block
+(id)options;
+(Class)currentConfigurationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)currentConfigurations;
-(void)setCurrentConfigurations:(NSMutableArray *)arg1 ;
-(void)setIAdID:(NSData *)arg1 ;
-(BOOL)hasIAdID;
-(NSData *)iAdID;
-(void)addCurrentConfiguration:(id)arg1 ;
-(unsigned long long)currentConfigurationsCount;
-(void)clearCurrentConfigurations;
-(id)currentConfigurationAtIndex:(unsigned long long)arg1 ;
@end

