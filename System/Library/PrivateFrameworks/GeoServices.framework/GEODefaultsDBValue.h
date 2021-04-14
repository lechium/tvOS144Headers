/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEODefaultsDBCollection, NSString;

@interface GEODefaultsDBValue : NSObject {

	GEODefaultsDBCollection* _parent;
	long long _dbId;
	NSString* _type;
	id _value;

}

@property (nonatomic,__weak,readonly) GEODefaultsDBCollection * parent;              //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) long long dbId;                                         //@synthesize dbId=_dbId - In the implementation block
@property (nonatomic,retain) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id value;                                               //@synthesize value=_value - In the implementation block
+(id)dbValue:(id)arg1 type:(id)arg2 value:(id)arg3 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)value;
-(void)setValue:(id)arg1 ;
-(GEODefaultsDBCollection *)parent;
-(id)initWithParent:(id)arg1 type:(id)arg2 value:(id)arg3 ;
-(long long)dbId;
-(void)setDbId:(long long)arg1 ;
@end

