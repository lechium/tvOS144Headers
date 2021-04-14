/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/BMProtoBufWrapper.h>

@class NSString, NSArray;

@interface BMContextualActionEvent : BMEventBase <BMStoreData, BMProtoBufWrapper> {

	NSString* _identifier;
	NSString* _appName;
	NSString* _actionName;
	NSArray* _contents;
	NSArray* _parameters;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * appName;                 //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionName;              //@synthesize actionName=_actionName - In the implementation block
@property (nonatomic,readonly) NSArray * contents;                      //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) NSArray * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) unsigned dataVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(NSString *)identifier;
-(NSArray *)contents;
-(NSArray *)parameters;
-(unsigned)dataVersion;
-(id)jsonDict;
-(NSString *)appName;
-(id)serialize;
-(NSString *)actionName;
-(id)json;
-(id)proto;
-(id)initWithProto:(id)arg1 ;
-(id)encodeAsProto;
-(id)initWithProtoData:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 appName:(id)arg2 actionName:(id)arg3 contents:(id)arg4 parameters:(id)arg5 ;
@end

