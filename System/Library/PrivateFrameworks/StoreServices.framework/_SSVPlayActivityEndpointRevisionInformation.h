/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSIndexSet, NSString;

@interface _SSVPlayActivityEndpointRevisionInformation : NSObject <NSCopying, NSSecureCoding> {

	NSIndexSet* _additionalPendingRevisionsIndexSet;
	unsigned long long _currentRevision;
	NSString* _revisionVersionToken;

}

@property (nonatomic,copy) NSIndexSet * additionalPendingRevisionsIndexSet;              //@synthesize additionalPendingRevisionsIndexSet=_additionalPendingRevisionsIndexSet - In the implementation block
@property (assign,nonatomic) unsigned long long currentRevision;                         //@synthesize currentRevision=_currentRevision - In the implementation block
@property (nonatomic,copy) NSString * revisionVersionToken;                              //@synthesize revisionVersionToken=_revisionVersionToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)currentRevision;
-(NSIndexSet *)additionalPendingRevisionsIndexSet;
-(void)setCurrentRevision:(unsigned long long)arg1 ;
-(void)setRevisionVersionToken:(NSString *)arg1 ;
-(NSString *)revisionVersionToken;
-(void)setAdditionalPendingRevisionsIndexSet:(NSIndexSet *)arg1 ;
@end

