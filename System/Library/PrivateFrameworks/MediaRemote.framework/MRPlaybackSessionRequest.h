/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaRemote/MediaRemote-Structs.h>
@class NSString, _MRPlaybackSessionRequestProtobuf, NSData;

@interface MRPlaybackSessionRequest : NSObject {

	BOOL _hasLocation;
	BOOL _hasLength;
	NSString* _requestIdentifier;
	NSString* _identifier;
	NSString* _type;
	unsigned long long _location;
	unsigned long long _length;

}

@property (nonatomic,readonly) _MRPlaybackSessionRequestProtobuf * protobuf; 
@property (nonatomic,copy) NSString * requestIdentifier;                                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * type;                                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long location;                                 //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLocation;                                            //@synthesize hasLocation=_hasLocation - In the implementation block
@property (assign,nonatomic) unsigned long long length;                                   //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) BOOL hasLength;                                              //@synthesize hasLength=_hasLength - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,readonly) NSRange range; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)length;
-(void)setType:(NSString *)arg1 ;
-(void)setLength:(unsigned long long)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(NSString *)type;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSRange)range;
-(NSString *)requestIdentifier;
-(void)setHasLength:(BOOL)arg1 ;
-(BOOL)hasLength;
-(unsigned long long)location;
-(void)setLocation:(unsigned long long)arg1 ;
-(BOOL)hasLocation;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)setHasLocation:(BOOL)arg1 ;
-(_MRPlaybackSessionRequestProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 range:(NSRange)arg2 ;
@end

