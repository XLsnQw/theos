/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/XXUnknownSuperclass.h>
#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSCoding.h>
#import <StoreServices/NSCoding.h>
#import <StoreServices/NSCopying.h>
#import <StoreServices/NSMutableCopying.h>

@class NSDictionary, NSData, NSArray, NSInputStream, NSString, NSURL;

@interface SSURLRequestProperties : XXUnknownSuperclass <SSCoding, NSCoding, NSCopying, NSMutableCopying> {
@private
	int _allowedRetryCount;	// 4 = 0x4
	unsigned _cachePolicy;	// 8 = 0x8
	NSString *_clientIdentifier;	// 12 = 0xc
	dispatch_queue_s *_dispatchQueue;	// 16 = 0x10
	long long _expectedContentLength;	// 20 = 0x14
	NSData *_httpBody;	// 28 = 0x1c
	NSInputStream *_httpBodyStream;	// 32 = 0x20
	NSDictionary *_httpHeaders;	// 36 = 0x24
	NSString *_httpMethod;	// 40 = 0x28
	BOOL _isITunesStoreRequest;	// 44 = 0x2c
	NSDictionary *_requestParameters;	// 48 = 0x30
	BOOL _shouldProcessProtocol;	// 52 = 0x34
	double _timeoutInterval;	// 56 = 0x38
	NSString *_urlBagKey;	// 64 = 0x40
	int _urlBagType;	// 68 = 0x44
	id _urlBagURLBlock;	// 72 = 0x48
	NSArray *_urls;	// 76 = 0x4c
	NSArray *_userAgentComponents;	// 80 = 0x50
}
@property(readonly, assign) NSArray *URLs;	// G=0x2c159; 
@property(readonly, assign) id URLBagURLBlock;	// G=0x2bfa9; 
@property(readonly, assign) int URLBagType;	// G=0x2bed9; 
@property(readonly, assign) BOOL shouldProcessProtocol;	// G=0x2b04d; 
@property(readonly, assign) NSInputStream *HTTPBodyStream;	// G=0x2bd3d; 
@property(readonly, assign) BOOL canBeResolved;	// G=0x2b9e9; 
@property(readonly, assign) NSArray *userAgentComponents;	// G=0x2b585; 
@property(readonly, assign) NSURL *URL;	// G=0x2b3b5; 
@property(readonly, assign) NSString *URLBagKey;	// G=0x2b219; 
@property(readonly, assign) double timeoutInterval;	// G=0x2b121; 
@property(readonly, assign) NSDictionary *requestParameters;	// G=0x2aeb1; 
@property(readonly, assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// G=0x2adc1; 
@property(readonly, assign) NSString *HTTPMethod;	// G=0x2ac25; 
@property(readonly, assign) NSDictionary *HTTPHeaders;	// G=0x2aa89; 
@property(readonly, assign) NSData *HTTPBody;	// G=0x2a8ed; 
@property(readonly, assign) long long expectedContentLength;	// G=0x2a801; 
@property(readonly, assign) unsigned cachePolicy;	// G=0x2a595; 
@property(readonly, assign) NSString *clientIdentifier;	// G=0x2a665; 
@property(readonly, assign) int allowedRetryCount;	// G=0x2a4c5; 
// declared property getter: - (id)URLs;	// 0x2c159
// declared property getter: - (id)URLBagURLBlock;	// 0x2bfa9
// declared property getter: - (int)URLBagType;	// 0x2bed9
// declared property getter: - (id)HTTPBodyStream;	// 0x2bd3d
- (id)copyURLRequest;	// 0x2bb01
// declared property getter: - (BOOL)canBeResolved;	// 0x2b9e9
- (BOOL)isEqual:(id)equal;	// 0x2b7c5
- (id)description;	// 0x2b721
// declared property getter: - (id)userAgentComponents;	// 0x2b585
// declared property getter: - (id)URL;	// 0x2b3b5
// declared property getter: - (id)URLBagKey;	// 0x2b219
// declared property getter: - (double)timeoutInterval;	// 0x2b121
// declared property getter: - (BOOL)shouldProcessProtocol;	// 0x2b04d
// declared property getter: - (id)requestParameters;	// 0x2aeb1
// declared property getter: - (BOOL)isITunesStoreRequest;	// 0x2adc1
// declared property getter: - (id)HTTPMethod;	// 0x2ac25
// declared property getter: - (id)HTTPHeaders;	// 0x2aa89
// declared property getter: - (id)HTTPBody;	// 0x2a8ed
// declared property getter: - (long long)expectedContentLength;	// 0x2a801
// declared property getter: - (id)clientIdentifier;	// 0x2a665
// declared property getter: - (unsigned)cachePolicy;	// 0x2a595
// declared property getter: - (int)allowedRetryCount;	// 0x2a4c5
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x2a489
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x2a1c5
- (void *)copyXPCEncoding;	// 0x2a191
- (id)copyPropertyListEncoding;	// 0x29e51
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x29afd
- (id)copyWithZone:(NSZone *)zone;	// 0x29aed
- (id)initWithCoder:(id)coder;	// 0x294a5
- (void)encodeWithCoder:(id)coder;	// 0x29125
- (void)dealloc;	// 0x29025
- (id)initWithURLRequest:(id)urlrequest;	// 0x28e45
- (id)initWithURL:(id)url;	// 0x28de5
- (id)init;	// 0x28dd1
- (id)_initCommon;	// 0x28d81
@end