/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _WKFrameHandle, NSURL, NSString, NSDate;

@interface _WKResourceLoadInfo : NSObject <WKObject, NSSecureCoding> {

	ObjectStorage<API::ResourceLoadInfo> _info;

}

@property (nonatomic,readonly) unsigned long long resourceLoadID; 
@property (nonatomic,readonly) _WKFrameHandle * frame; 
@property (nonatomic,readonly) _WKFrameHandle * parentFrame; 
@property (nonatomic,readonly) NSURL * originalURL; 
@property (nonatomic,readonly) NSString * originalHTTPMethod; 
@property (nonatomic,readonly) NSDate * eventTimestamp; 
@property (nonatomic,readonly) BOOL loadedFromCache; 
@property (nonatomic,readonly) long long resourceType; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_WKFrameHandle *)frame;
-(NSDate *)eventTimestamp;
-(long long)resourceType;
-(_WKFrameHandle *)parentFrame;
-(NSURL *)originalURL;
-(Object*)_apiObject;
-(unsigned long long)resourceLoadID;
-(NSString *)originalHTTPMethod;
-(BOOL)loadedFromCache;
@end

